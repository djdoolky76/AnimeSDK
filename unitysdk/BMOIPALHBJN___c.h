#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMOIPALHBJN;
namespace System { class Object; }

#define BMOIPALHBJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF62D50)
#define BMOIPALHBJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF62D90)
#define BMOIPALHBJN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FF62DA0)

inline static constexpr unsigned int BMOIPALHBJN___c_TypeDefinitionIndex = 32537;

	class BMOIPALHBJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMOIPALHBJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOIPALHBJN___C_CTOR_OFFSET))(this);
		}

		::BMOIPALHBJN* __cctor_b__38_0()
		{
			return ((::BMOIPALHBJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMOIPALHBJN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
