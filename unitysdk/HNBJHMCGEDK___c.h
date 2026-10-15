#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNBJHMCGEDK;
namespace System { class Object; }

#define HNBJHMCGEDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D90A0)
#define HNBJHMCGEDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D90E0)
#define HNBJHMCGEDK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5D90F0)

inline static constexpr unsigned int HNBJHMCGEDK___c_TypeDefinitionIndex = 26932;

	class HNBJHMCGEDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B3C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNBJHMCGEDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBJHMCGEDK___C_CTOR_OFFSET))(this);
		}

		::HNBJHMCGEDK* __cctor_b__28_0()
		{
			return ((::HNBJHMCGEDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNBJHMCGEDK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
