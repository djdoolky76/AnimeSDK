#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOALLAPKMFA;
namespace System { class Object; }

#define EOALLAPKMFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5DBA20)
#define EOALLAPKMFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5DBA60)
#define EOALLAPKMFA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F5DBA70)

inline static constexpr unsigned int EOALLAPKMFA___c_TypeDefinitionIndex = 35049;

	class EOALLAPKMFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOALLAPKMFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA___C_CTOR_OFFSET))(this);
		}

		::EOALLAPKMFA* __cctor_b__33_0()
		{
			return ((::EOALLAPKMFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
