#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBAKHMJIAEC;
namespace System { class Object; }

#define LBAKHMJIAEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A8A50)
#define LBAKHMJIAEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A8A90)
#define LBAKHMJIAEC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8A8AA0)

inline static constexpr unsigned int LBAKHMJIAEC___c_TypeDefinitionIndex = 27436;

	class LBAKHMJIAEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x253A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBAKHMJIAEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC___C_CTOR_OFFSET))(this);
		}

		::LBAKHMJIAEC* __cctor_b__23_0()
		{
			return ((::LBAKHMJIAEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
