#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBEBKODGODB;
namespace System { class Object; }

#define OBEBKODGODB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBAD4A0)
#define OBEBKODGODB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBAD4E0)
#define OBEBKODGODB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EBAD4F0)

inline static constexpr unsigned int OBEBKODGODB___c_TypeDefinitionIndex = 31742;

	class OBEBKODGODB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x101D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBEBKODGODB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEBKODGODB___C_CTOR_OFFSET))(this);
		}

		::OBEBKODGODB* __cctor_b__33_0()
		{
			return ((::OBEBKODGODB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEBKODGODB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
