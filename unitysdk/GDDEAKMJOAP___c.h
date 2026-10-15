#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDDEAKMJOAP;
namespace System { class Object; }

#define GDDEAKMJOAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E417B70)
#define GDDEAKMJOAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E417BB0)
#define GDDEAKMJOAP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E417BC0)

inline static constexpr unsigned int GDDEAKMJOAP___c_TypeDefinitionIndex = 31212;

	class GDDEAKMJOAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF7B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDDEAKMJOAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDEAKMJOAP___C_CTOR_OFFSET))(this);
		}

		::GDDEAKMJOAP* __cctor_b__28_0()
		{
			return ((::GDDEAKMJOAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDEAKMJOAP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
