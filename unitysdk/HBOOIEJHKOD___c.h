#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBOOIEJHKOD;
namespace System { class Object; }

#define HBOOIEJHKOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5311C0)
#define HBOOIEJHKOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E531200)
#define HBOOIEJHKOD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E531210)

inline static constexpr unsigned int HBOOIEJHKOD___c_TypeDefinitionIndex = 30329;

	class HBOOIEJHKOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F1C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBOOIEJHKOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOOIEJHKOD___C_CTOR_OFFSET))(this);
		}

		::HBOOIEJHKOD* __cctor_b__28_0()
		{
			return ((::HBOOIEJHKOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOOIEJHKOD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
