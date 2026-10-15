#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLHNEDPPFOO;
namespace System { class Object; }

#define JLHNEDPPFOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E77B2D0)
#define JLHNEDPPFOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77B310)
#define JLHNEDPPFOO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E77B320)

inline static constexpr unsigned int JLHNEDPPFOO___c_TypeDefinitionIndex = 28946;

	class JLHNEDPPFOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x696F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLHNEDPPFOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHNEDPPFOO___C_CTOR_OFFSET))(this);
		}

		::JLHNEDPPFOO* __cctor_b__33_0()
		{
			return ((::JLHNEDPPFOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHNEDPPFOO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
