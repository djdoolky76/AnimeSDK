#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECBFFNKFPDA;
class PMGOFCCJEDE;
class POCFKFBIABM;
namespace System { class Nullable; }

#define BHBNAJMBAHO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB472A80)
#define BHBNAJMBAHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB472A70)
#define BHBNAJMBAHO_JAKBJKLLKKC_OFFSET UNITYSDK_OFFSET(0xB4728F0)
#define BHBNAJMBAHO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB4728A0)
#define BHBNAJMBAHO_LBGDGIOCPFK_OFFSET UNITYSDK_OFFSET(0xB472790)
#define BHBNAJMBAHO_OGDMBIDELJI_OFFSET UNITYSDK_OFFSET(0xB472A20)

inline static constexpr unsigned int BHBNAJMBAHO_TypeDefinitionIndex = 71511;

	class BHBNAJMBAHO : public ::System::Object
	{
	public:
		::POCFKFBIABM* ECEOOJALIMG; // 0x10
		static ::ECBFFNKFPDA** StaticGet_CEFLOIEBOKD()
		{
			return (::ECBFFNKFPDA**)UnitySDK::FromName("", "BHBNAJMBAHO")->GetStaticField(0x6EDB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBNAJMBAHO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHBNAJMBAHO_CCTOR_OFFSET))();
		}

		::System::Void LBGDGIOCPFK(::PMGOFCCJEDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMGOFCCJEDE*))((::PBYTE)hIl2Cpp + BHBNAJMBAHO_LBGDGIOCPFK_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBNAJMBAHO_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Nullable* JAKBJKLLKKC()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBNAJMBAHO_JAKBJKLLKKC_OFFSET))(this);
		}

		::System::Boolean OGDMBIDELJI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBNAJMBAHO_OGDMBIDELJI_OFFSET))(this);
		}

	};
