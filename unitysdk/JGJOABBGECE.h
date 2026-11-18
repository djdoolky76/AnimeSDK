#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Arcade/CoreBase/ComponentMask.h"

#define JGJOABBGECE_AIEJNLCNAFE_OFFSET UNITYSDK_OFFSET(0x1FF659F0)
#define JGJOABBGECE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF659E0)

inline static constexpr unsigned int JGJOABBGECE_TypeDefinitionIndex = 28889;

class JGJOABBGECE : public ::System::Object
{
public:
	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGJOABBGECE__CCTOR_OFFSET))();
	}

	static ::MoleMole::Arcade::CoreBase::ComponentMask AIEJNLCNAFE(::Il2CppArray<::System::UInt32>* IBJNHEADLIO)
	{
		return ((::MoleMole::Arcade::CoreBase::ComponentMask(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + JGJOABBGECE_AIEJNLCNAFE_OFFSET))(IBJNHEADLIO);
	}
};
