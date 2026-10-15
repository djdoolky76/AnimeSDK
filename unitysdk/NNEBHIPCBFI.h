#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/System/Object.h"
class KHKMCPLEEEB;
class NNEBHIPCBFI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define NNEBHIPCBFI_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBC994E0)
#define NNEBHIPCBFI_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBC98D50)
#define NNEBHIPCBFI_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC99580)
#define NNEBHIPCBFI_CTOR_OFFSET UNITYSDK_OFFSET(0xBC98E90)
#define NNEBHIPCBFI_HHGIIOCAAGA_OFFSET UNITYSDK_OFFSET(0xBC99090)
#define NNEBHIPCBFI_KGPHPJDJDLA_OFFSET UNITYSDK_OFFSET(0xBC990E0)
#define NNEBHIPCBFI_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xBC99480)
#define NNEBHIPCBFI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBC98EA0)

inline static constexpr unsigned int NNEBHIPCBFI_TypeDefinitionIndex = 49355;

	class NNEBHIPCBFI : public ::System::Object
	{
	public:
		::System::Action* DLLHNPPIIPG; // 0x10
		::KHKMCPLEEEB* NHOEPPPPFCP; // 0x18
		::System::Single HNOLFPKINDK; // 0x20
		::System::Single PPJFAHFEGDD; // 0x24
		::System::Single BAGBOHCDFFA; // 0x28
		static ::System::Collections::Generic::Stack_1<::NNEBHIPCBFI*>** StaticGet_MFPNICMCKJG()
		{
			return (::System::Collections::Generic::Stack_1<::NNEBHIPCBFI*>**)UnitySDK::FromName("", "NNEBHIPCBFI")->GetStaticField(0x4C280);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEBHIPCBFI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNEBHIPCBFI_CCTOR_OFFSET))();
		}

		static ::NNEBHIPCBFI* ACMKLFOMPFC(::KHKMCPLEEEB* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::NNEBHIPCBFI*(*)(::KHKMCPLEEEB*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + NNEBHIPCBFI_ACMKLFOMPFC_OFFSET))(a1, a2, a3, a4);
		}

		::ScenenLightManager::FadingState HHGIIOCAAGA()
		{
			return ((::ScenenLightManager::FadingState(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEBHIPCBFI_HHGIIOCAAGA_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::KHKMCPLEEEB* a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::KHKMCPLEEEB*, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + NNEBHIPCBFI_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean KGPHPJDJDLA(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNEBHIPCBFI_KGPHPJDJDLA_OFFSET))(this, a1);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEBHIPCBFI_KHNCMBEFIKI_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEBHIPCBFI_ABKBOGIGAEH_OFFSET))(this);
		}

	};
