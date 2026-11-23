#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace UnityEngine { class A873EAEF5726F4A2; }
namespace UnityEngine { class AEF15FF8FF0613CF; }
namespace UnityEngine { class B2BD602F7224647B; }

#define UNITYENGINE_A01E6FCF9ABC3CD0_A09642463A066AF3_OFFSET UNITYSDK_OFFSET(0x4108010)
#define UNITYENGINE_A01E6FCF9ABC3CD0_BD1B36DD2ABF63C9_OFFSET UNITYSDK_OFFSET(0x4107ED0)
#define UNITYENGINE_A01E6FCF9ABC3CD0_BE6BB7F7438FB63A_OFFSET UNITYSDK_OFFSET(0x4107D50)
#define UNITYENGINE_A01E6FCF9ABC3CD0_EAF9DCFFE0462E6B_OFFSET UNITYSDK_OFFSET(0x4107DC0)
#define UNITYENGINE_A01E6FCF9ABC3CD0_ED19845099A5B85E_OFFSET UNITYSDK_OFFSET(0x4107B50)
#define UNITYENGINE_A01E6FCF9ABC3CD0__CCTOR_OFFSET UNITYSDK_OFFSET(0x41084D0)

namespace UnityEngine
{
	inline static constexpr unsigned int A01E6FCF9ABC3CD0_TypeDefinitionIndex = 17090;

	class A01E6FCF9ABC3CD0 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::B2BD602F7224647B*>** StaticGet_B5930AB0C7EA4D68()
		{
			return (::Il2CppArray<::UnityEngine::B2BD602F7224647B*>**)Il2CppClass::FromTypeDefinitionIndex(A01E6FCF9ABC3CD0_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::UnityEngine::A873EAEF5726F4A2*>** StaticGet_F04EB703ED0495B7()
		{
			return (::Il2CppArray<::UnityEngine::A873EAEF5726F4A2*>**)Il2CppClass::FromTypeDefinitionIndex(A01E6FCF9ABC3CD0_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::Il2CppArray<::UnityEngine::AEF15FF8FF0613CF*>** StaticGet_A3989393FACCA53E()
		{
			return (::Il2CppArray<::UnityEngine::AEF15FF8FF0613CF*>**)Il2CppClass::FromTypeDefinitionIndex(A01E6FCF9ABC3CD0_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::Il2CppArray<::System::Type*>* A09642463A066AF3(::System::Type* E638E67D3A0124A7)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_A01E6FCF9ABC3CD0_A09642463A066AF3_OFFSET))(E638E67D3A0124A7);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_A01E6FCF9ABC3CD0__CCTOR_OFFSET))();
		}

		static ::System::Int32 EAF9DCFFE0462E6B(::System::Type* E638E67D3A0124A7)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_A01E6FCF9ABC3CD0_EAF9DCFFE0462E6B_OFFSET))(E638E67D3A0124A7);
		}

		static ::System::Int32 BE6BB7F7438FB63A(::System::Type* E638E67D3A0124A7)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_A01E6FCF9ABC3CD0_BE6BB7F7438FB63A_OFFSET))(E638E67D3A0124A7);
		}

		static ::System::Int32 ED19845099A5B85E(::System::Type* E638E67D3A0124A7)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_A01E6FCF9ABC3CD0_ED19845099A5B85E_OFFSET))(E638E67D3A0124A7);
		}

		static ::System::Type* BD1B36DD2ABF63C9(::System::Type* A288CB28FC2A6DA3)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_A01E6FCF9ABC3CD0_BD1B36DD2ABF63C9_OFFSET))(A288CB28FC2A6DA3);
		}
	};
}
