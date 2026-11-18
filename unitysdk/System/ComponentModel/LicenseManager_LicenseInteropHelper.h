#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class Type; }
namespace System::ComponentModel { class LicenseContext; }
namespace System::ComponentModel::Design { class DesigntimeLicenseContext; }

#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_ALLOCATEANDVALIDATELICENSE_OFFSET UNITYSDK_OFFSET(0x1D923100)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_GETCURRENTCONTEXTINFO_OFFSET UNITYSDK_OFFSET(0x1D923770)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_GETLICINFO_OFFSET UNITYSDK_OFFSET(0x1D9234D0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_REQUESTLICKEY_OFFSET UNITYSDK_OFFSET(0x1D923350)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_SAVEKEYINCURRENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1D9238C0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9239A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicenseManager_LicenseInteropHelper_TypeDefinitionIndex = 2928;

	class LicenseManager_LicenseInteropHelper : public ::System::Object
	{
	public:
		// static const ::System::Int32 S_OK = 0x0; // 0x0
		// static const ::System::Int32 E_NOTIMPL = -0x7FFFBFFF; // 0x0
		// static const ::System::Int32 CLASS_E_NOTLICENSED = -0x7FFBFEEE; // 0x0
		// static const ::System::Int32 E_FAIL = -0x7FFFFFF8; // 0x0
		::System::ComponentModel::LicenseContext* savedLicenseContext; // 0x10
		::System::Type* savedType; // 0x18
		::System::ComponentModel::Design::DesigntimeLicenseContext* helperContext; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Object* AllocateAndValidateLicense(::System::RuntimeTypeHandle rth, ::System::IntPtr bstrKey, ::System::Int32 fDesignTime)
		{
			return ((::System::Object*(*)(::System::RuntimeTypeHandle, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_ALLOCATEANDVALIDATELICENSE_OFFSET))(rth, bstrKey, fDesignTime);
		}

		static ::System::Int32 RequestLicKey(::System::RuntimeTypeHandle rth, ::System::IntPtr& pbstrKey)
		{
			return ((::System::Int32(*)(::System::RuntimeTypeHandle, ::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_REQUESTLICKEY_OFFSET))(rth, pbstrKey);
		}

		::System::Void GetLicInfo(::System::RuntimeTypeHandle rth, ::System::Int32& pRuntimeKeyAvail, ::System::Int32& pLicVerified)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_GETLICINFO_OFFSET))(this, rth, pRuntimeKeyAvail, pLicVerified);
		}

		::System::Void GetCurrentContextInfo(::System::Int32& fDesignTime, ::System::IntPtr& bstrKey, ::System::RuntimeTypeHandle rth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::IntPtr&, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_GETCURRENTCONTEXTINFO_OFFSET))(this, fDesignTime, bstrKey, rth);
		}

		::System::Void SaveKeyInCurrentContext(::System::IntPtr bstrKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LICENSEINTEROPHELPER_SAVEKEYINCURRENTCONTEXT_OFFSET))(this, bstrKey);
		}
	};
}
