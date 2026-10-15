#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCGCOHCHKBN;
namespace System { class Object; }

#define HCGCOHCHKBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E50E830)
#define HCGCOHCHKBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E50E870)
#define HCGCOHCHKBN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E50E880)

inline static constexpr unsigned int HCGCOHCHKBN___c_TypeDefinitionIndex = 31096;

	class HCGCOHCHKBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A960);
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
