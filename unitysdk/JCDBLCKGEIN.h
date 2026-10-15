#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNLKNLJBHDD;
class PLMODIOCPAF;
namespace Entitas { class IGroup; }

#define JCDBLCKGEIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F32D0)
#define JCDBLCKGEIN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C6F3390)
#define JCDBLCKGEIN_IDJIPABFBCC_OFFSET UNITYSDK_OFFSET(0x1C6F35B0)

inline static constexpr unsigned int JCDBLCKGEIN_TypeDefinitionIndex = 37144;

	class JCDBLCKGEIN : public ::System::Object
	{
	public:
		::PLMODIOCPAF* PDENFEFCAGN; // 0x10
		::Entitas::IGroup* DAAALPNCMNO; // 0x18
		::System::Void _ctor(::PLMODIOCPAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLMODIOCPAF*))((::PBYTE)hIl2Cpp + JCDBLCKGEIN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDBLCKGEIN_EXECUTE_OFFSET))(this);
		}

		::System::Void IDJIPABFBCC(::HNLKNLJBHDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + JCDBLCKGEIN_IDJIPABFBCC_OFFSET))(this, a1);
		}

	};
