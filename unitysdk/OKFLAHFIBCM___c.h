#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKFLAHFIBCM;
namespace System { class Object; }

#define OKFLAHFIBCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE98230)
#define OKFLAHFIBCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE98260)
#define OKFLAHFIBCM___C___CCTOR_B__113_0_OFFSET UNITYSDK_OFFSET(0x1DE98270)

	class OKFLAHFIBCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKFLAHFIBCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFLAHFIBCM___C_CTOR_OFFSET))(this);
		}

		::OKFLAHFIBCM* __cctor_b__113_0()
		{
			return ((::OKFLAHFIBCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKFLAHFIBCM___C___CCTOR_B__113_0_OFFSET))(this);
		}

	};
