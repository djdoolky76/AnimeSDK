#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFHACDNMNAL;
namespace System { class Object; }

#define OFHACDNMNAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0EC3D0)
#define OFHACDNMNAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0EC410)
#define OFHACDNMNAL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F0EC420)

inline static constexpr unsigned int OFHACDNMNAL___c_TypeDefinitionIndex = 28700;

	class OFHACDNMNAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFHACDNMNAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHACDNMNAL___C_CTOR_OFFSET))(this);
		}

		::OFHACDNMNAL* __cctor_b__18_0()
		{
			return ((::OFHACDNMNAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHACDNMNAL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
