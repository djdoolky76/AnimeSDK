#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLAIAPGBEIA;
namespace System { class Object; }

#define JLAIAPGBEIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E745000)
#define JLAIAPGBEIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E745040)
#define JLAIAPGBEIA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E745050)

inline static constexpr unsigned int JLAIAPGBEIA___c_TypeDefinitionIndex = 27584;

	class JLAIAPGBEIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLAIAPGBEIA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAIAPGBEIA___C_CTOR_OFFSET))(this);
		}

		::JLAIAPGBEIA* __cctor_b__18_0()
		{
			return ((::JLAIAPGBEIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAIAPGBEIA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
