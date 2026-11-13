#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIDFCGLODFB;
namespace System { class Object; }

#define EIDFCGLODFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF90300)
#define EIDFCGLODFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF90340)
#define EIDFCGLODFB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FF90350)

inline static constexpr unsigned int EIDFCGLODFB___c_TypeDefinitionIndex = 31932;

	class EIDFCGLODFB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DB00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIDFCGLODFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDFCGLODFB___C_CTOR_OFFSET))(this);
		}

		::EIDFCGLODFB* __cctor_b__38_0()
		{
			return ((::EIDFCGLODFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDFCGLODFB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
