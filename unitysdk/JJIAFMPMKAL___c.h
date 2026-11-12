#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJIAFMPMKAL;
namespace System { class Object; }

#define JJIAFMPMKAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA8A6E0)
#define JJIAFMPMKAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA8A710)
#define JJIAFMPMKAL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA8A720)

inline static constexpr unsigned int JJIAFMPMKAL___c_TypeDefinitionIndex = 25931;

	class JJIAFMPMKAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E3C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJIAFMPMKAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIAFMPMKAL___C_CTOR_OFFSET))(this);
		}

		::JJIAFMPMKAL* __cctor_b__28_0()
		{
			return ((::JJIAFMPMKAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIAFMPMKAL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
