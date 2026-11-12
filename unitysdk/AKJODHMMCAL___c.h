#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKJODHMMCAL;
namespace System { class Object; }

#define AKJODHMMCAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F68B890)
#define AKJODHMMCAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F68B8D0)
#define AKJODHMMCAL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F68B8E0)

inline static constexpr unsigned int AKJODHMMCAL___c_TypeDefinitionIndex = 27036;

	class AKJODHMMCAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DC50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKJODHMMCAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJODHMMCAL___C_CTOR_OFFSET))(this);
		}

		::AKJODHMMCAL* __cctor_b__23_0()
		{
			return ((::AKJODHMMCAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJODHMMCAL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
