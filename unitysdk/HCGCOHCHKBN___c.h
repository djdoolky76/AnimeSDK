#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCGCOHCHKBN;
namespace System { class Object; }

#define HCGCOHCHKBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200BCB30)
#define HCGCOHCHKBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200BCB70)
#define HCGCOHCHKBN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x200BCB80)

inline static constexpr unsigned int HCGCOHCHKBN___c_TypeDefinitionIndex = 32009;

	class HCGCOHCHKBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCGCOHCHKBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGCOHCHKBN___C_CTOR_OFFSET))(this);
		}

		::HCGCOHCHKBN* __cctor_b__23_0()
		{
			return ((::HCGCOHCHKBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGCOHCHKBN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
