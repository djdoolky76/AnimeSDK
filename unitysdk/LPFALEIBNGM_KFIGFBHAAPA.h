#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LPFALEIBNGM;
namespace System { class Action; }

#define LPFALEIBNGM_KFIGFBHAAPA_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x1B7F5CB0)
#define LPFALEIBNGM_KFIGFBHAAPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F5CA0)

inline static constexpr unsigned int LPFALEIBNGM_KFIGFBHAAPA_TypeDefinitionIndex = 13153;

class LPFALEIBNGM_KFIGFBHAAPA : public ::System::Object
{
public:
	::LPFALEIBNGM* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFALEIBNGM_KFIGFBHAAPA__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + LPFALEIBNGM_KFIGFBHAAPA_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
