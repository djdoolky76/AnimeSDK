#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIBENADLLGH;
namespace System { class Object; }

#define AIBENADLLGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F52D420)
#define AIBENADLLGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F52D460)
#define AIBENADLLGH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F52D470)

inline static constexpr unsigned int AIBENADLLGH___c_TypeDefinitionIndex = 31358;

	class AIBENADLLGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIBENADLLGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBENADLLGH___C_CTOR_OFFSET))(this);
		}

		::AIBENADLLGH* __cctor_b__18_0()
		{
			return ((::AIBENADLLGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBENADLLGH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
