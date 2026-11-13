#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBDFLHHJCGM;
namespace System { class Object; }

#define GBDFLHHJCGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC48CF0)
#define GBDFLHHJCGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC48D30)
#define GBDFLHHJCGM___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1FC48D40)

inline static constexpr unsigned int GBDFLHHJCGM___c_TypeDefinitionIndex = 33206;

	class GBDFLHHJCGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBDFLHHJCGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDFLHHJCGM___C_CTOR_OFFSET))(this);
		}

		::GBDFLHHJCGM* __cctor_b__58_0()
		{
			return ((::GBDFLHHJCGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDFLHHJCGM___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
