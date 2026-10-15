#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLJLBCGBOCB;
namespace System { class Object; }

#define DLJLBCGBOCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E7EC0)
#define DLJLBCGBOCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E7F00)
#define DLJLBCGBOCB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1E7F10)

inline static constexpr unsigned int DLJLBCGBOCB___c_TypeDefinitionIndex = 32991;

	class DLJLBCGBOCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DC00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLJLBCGBOCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJLBCGBOCB___C_CTOR_OFFSET))(this);
		}

		::DLJLBCGBOCB* __cctor_b__28_0()
		{
			return ((::DLJLBCGBOCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLJLBCGBOCB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
