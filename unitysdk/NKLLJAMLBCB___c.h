#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKLLJAMLBCB;
namespace System { class Object; }

#define NKLLJAMLBCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA1E910)
#define NKLLJAMLBCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA1E950)
#define NKLLJAMLBCB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA1E960)

inline static constexpr unsigned int NKLLJAMLBCB___c_TypeDefinitionIndex = 35288;

	class NKLLJAMLBCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x683A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKLLJAMLBCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLLJAMLBCB___C_CTOR_OFFSET))(this);
		}

		::NKLLJAMLBCB* __cctor_b__28_0()
		{
			return ((::NKLLJAMLBCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLLJAMLBCB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
