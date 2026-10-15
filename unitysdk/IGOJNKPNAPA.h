#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOBICCEGAMM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IGOJNKPNAPA_CTOR_OFFSET UNITYSDK_OFFSET(0x16416300)
#define IGOJNKPNAPA_KMHHKMENOEH_OFFSET UNITYSDK_OFFSET(0x164161D0)

inline static constexpr unsigned int IGOJNKPNAPA_TypeDefinitionIndex = 67145;

	class IGOJNKPNAPA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOJNKPNAPA_CTOR_OFFSET))(this);
		}

		::System::Void KMHHKMENOEH(::System::Collections::Generic::List_1<::AOBICCEGAMM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AOBICCEGAMM*>*))((::PBYTE)hIl2Cpp + IGOJNKPNAPA_KMHHKMENOEH_OFFSET))(this, a1);
		}

	};
