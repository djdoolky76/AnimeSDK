#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKFLAHFIBCM;
namespace System { class Object; }

#define OKFLAHFIBCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F140530)
#define OKFLAHFIBCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F140560)
#define OKFLAHFIBCM___C___CCTOR_B__113_0_OFFSET UNITYSDK_OFFSET(0x1F140570)

inline static constexpr unsigned int OKFLAHFIBCM___c_TypeDefinitionIndex = 25917;

	class OKFLAHFIBCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DAB0);
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
