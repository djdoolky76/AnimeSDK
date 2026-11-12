#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFIEAIJBHIB;
namespace System { class Object; }

#define EFIEAIJBHIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F571C60)
#define EFIEAIJBHIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F571CA0)
#define EFIEAIJBHIB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F571CB0)

inline static constexpr unsigned int EFIEAIJBHIB___c_TypeDefinitionIndex = 30626;

	class EFIEAIJBHIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFIEAIJBHIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIEAIJBHIB___C_CTOR_OFFSET))(this);
		}

		::EFIEAIJBHIB* __cctor_b__18_0()
		{
			return ((::EFIEAIJBHIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIEAIJBHIB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
