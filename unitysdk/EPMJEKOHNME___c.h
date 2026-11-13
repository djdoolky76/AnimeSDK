#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPMJEKOHNME;
namespace System { class Object; }

#define EPMJEKOHNME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F73E1E0)
#define EPMJEKOHNME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F73E220)
#define EPMJEKOHNME___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F73E230)

inline static constexpr unsigned int EPMJEKOHNME___c_TypeDefinitionIndex = 28839;

	class EPMJEKOHNME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPMJEKOHNME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMJEKOHNME___C_CTOR_OFFSET))(this);
		}

		::EPMJEKOHNME* __cctor_b__23_0()
		{
			return ((::EPMJEKOHNME*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMJEKOHNME___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
