#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDKEPPDIDIH;
namespace System { class Object; }

#define HDKEPPDIDIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E54FD40)
#define HDKEPPDIDIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54FD70)
#define HDKEPPDIDIH___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1E54FD80)

inline static constexpr unsigned int HDKEPPDIDIH___c_TypeDefinitionIndex = 25474;

	class HDKEPPDIDIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDKEPPDIDIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKEPPDIDIH___C_CTOR_OFFSET))(this);
		}

		::HDKEPPDIDIH* __cctor_b__68_0()
		{
			return ((::HDKEPPDIDIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKEPPDIDIH___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
