#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNLKNLJBHDD;
class PLMODIOCPAF;
namespace Entitas { template <typename T> class IGroup_1; }

#define JCDBLCKGEIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C12F790)
#define JCDBLCKGEIN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C12F850)
#define JCDBLCKGEIN_IDJIPABFBCC_OFFSET UNITYSDK_OFFSET(0x1C12FA70)

inline static constexpr unsigned int JCDBLCKGEIN_TypeDefinitionIndex = 38072;

	class JCDBLCKGEIN : public ::System::Object
	{
	public:
		::PLMODIOCPAF* PDENFEFCAGN; // 0x10
		::Entitas::IGroup_1<::HNLKNLJBHDD*>* DAAALPNCMNO; // 0x18
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
