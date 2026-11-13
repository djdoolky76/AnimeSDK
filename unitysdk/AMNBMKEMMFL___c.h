#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMNBMKEMMFL;
namespace System { class Object; }

#define AMNBMKEMMFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20197340)
#define AMNBMKEMMFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20197380)
#define AMNBMKEMMFL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20197390)

inline static constexpr unsigned int AMNBMKEMMFL___c_TypeDefinitionIndex = 31137;

	class AMNBMKEMMFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AFC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMNBMKEMMFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNBMKEMMFL___C_CTOR_OFFSET))(this);
		}

		::AMNBMKEMMFL* __cctor_b__28_0()
		{
			return ((::AMNBMKEMMFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNBMKEMMFL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
