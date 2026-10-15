#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALNFEBKHCFC;
namespace System { class Object; }

#define ALNFEBKHCFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5135D0)
#define ALNFEBKHCFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E513610)
#define ALNFEBKHCFC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E513620)

inline static constexpr unsigned int ALNFEBKHCFC___c_TypeDefinitionIndex = 29357;

	class ALNFEBKHCFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALNFEBKHCFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNFEBKHCFC___C_CTOR_OFFSET))(this);
		}

		::ALNFEBKHCFC* __cctor_b__23_0()
		{
			return ((::ALNFEBKHCFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNFEBKHCFC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
