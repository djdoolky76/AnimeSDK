#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNNBOBGFAKH;
namespace System { class Object; }

#define FNNBOBGFAKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C7350)
#define FNNBOBGFAKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C7390)
#define FNNBOBGFAKH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3C73A0)

inline static constexpr unsigned int FNNBOBGFAKH___c_TypeDefinitionIndex = 30770;

	class FNNBOBGFAKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNNBOBGFAKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNBOBGFAKH___C_CTOR_OFFSET))(this);
		}

		::FNNBOBGFAKH* __cctor_b__28_0()
		{
			return ((::FNNBOBGFAKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNNBOBGFAKH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
