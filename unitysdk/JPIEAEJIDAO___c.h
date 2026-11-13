#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPIEAEJIDAO;
namespace System { class Object; }

#define JPIEAEJIDAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8E1160)
#define JPIEAEJIDAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E11A0)
#define JPIEAEJIDAO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8E11B0)

inline static constexpr unsigned int JPIEAEJIDAO___c_TypeDefinitionIndex = 31208;

	class JPIEAEJIDAO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPIEAEJIDAO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIEAEJIDAO___C_CTOR_OFFSET))(this);
		}

		::JPIEAEJIDAO* __cctor_b__23_0()
		{
			return ((::JPIEAEJIDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIEAEJIDAO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
