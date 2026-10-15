#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOCIDFPEBGM;
namespace System { class Object; }

#define JOCIDFPEBGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E79E4E0)
#define JOCIDFPEBGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79E520)
#define JOCIDFPEBGM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E79E530)

	class JOCIDFPEBGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CC20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOCIDFPEBGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIDFPEBGM___C_CTOR_OFFSET))(this);
		}

		::JOCIDFPEBGM* __cctor_b__28_0()
		{
			return ((::JOCIDFPEBGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIDFPEBGM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
