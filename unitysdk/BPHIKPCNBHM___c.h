#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPHIKPCNBHM;
namespace System { class Object; }

#define BPHIKPCNBHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E01A8C0)
#define BPHIKPCNBHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E01A8F0)
#define BPHIKPCNBHM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E01A900)

inline static constexpr unsigned int BPHIKPCNBHM___c_TypeDefinitionIndex = 33190;

	class BPHIKPCNBHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPHIKPCNBHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHIKPCNBHM___C_CTOR_OFFSET))(this);
		}

		::BPHIKPCNBHM* __cctor_b__23_0()
		{
			return ((::BPHIKPCNBHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHIKPCNBHM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
