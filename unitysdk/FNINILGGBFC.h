#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
namespace System { class Object; }
namespace System { class String; }

#define FNINILGGBFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x158680C0)
#define FNINILGGBFC_DHCPMHIAAOK_OFFSET UNITYSDK_OFFSET(0x2E79170)
#define FNINILGGBFC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2E791A0)
#define FNINILGGBFC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2E79160)
#define FNINILGGBFC_GBFEGLDAENA_OFFSET UNITYSDK_OFFSET(0x2E79180)
#define FNINILGGBFC_JAJLIBEAMMH_OFFSET UNITYSDK_OFFSET(0x15865CA0)
#define FNINILGGBFC_PHFIBKDEIJB_OFFSET UNITYSDK_OFFSET(0x2E79190)

inline static constexpr unsigned int FNINILGGBFC_TypeDefinitionIndex = 71085;

	struct alignas(8) FNINILGGBFC
	{
		::Unity::Collections::NativeArray_1<::System::Int32> NDOOAEHJLAL; // 0x10
		::System::Byte _padding0[0x8];
		::System::Single ADPJPDDOLLK; // 0x20
		static ::System::Object** StaticGet_JNACIPNELFK()
		{
			return (::System::Object**)UnitySDK::FromName("", "FNINILGGBFC")->GetStaticField(0x501F0);
		}

		static ::System::Boolean* StaticGet_KCJNNDMOFLB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FNINILGGBFC")->GetStaticField(0x12170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNINILGGBFC_CCTOR_OFFSET))();
		}

		static ::System::String* JAJLIBEAMMH(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + FNINILGGBFC_JAJLIBEAMMH_OFFSET))(a1, a2);
		}

		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FNINILGGBFC_EXECUTE_OFFSET))(this, a1);
		}

		::System::Void DHCPMHIAAOK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FNINILGGBFC_DHCPMHIAAOK_OFFSET))(this, a1);
		}

		::System::Void GBFEGLDAENA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNINILGGBFC_GBFEGLDAENA_OFFSET))(this);
		}

		::System::Void PHFIBKDEIJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNINILGGBFC_PHFIBKDEIJB_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNINILGGBFC_DISPOSE_OFFSET))(this);
		}

	};
