#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IGLACMPAOLK;
class LPOEMCGIBMK;
class MJFNABLBEIH;
namespace Code::Logic::Data::ScriptObject::Level { class Layer; }
namespace Code::Logic::Data::ScriptObject::Level { class PatternTimeline; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKIFGEBEBAC_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1A6960B0)
#define MKIFGEBEBAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A695E90)

inline static constexpr unsigned int MKIFGEBEBAC_TypeDefinitionIndex = 50986;

class MKIFGEBEBAC : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* GFPNDBBBPOG; // 0x10
	::MJFNABLBEIH* CJIIJINGBGE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::LPOEMCGIBMK*>* IIJNCEKLEIC; // 0x20
	::Il2CppArray<::IGLACMPAOLK*>* MEIPOAIICLJ; // 0x28

	::System::Void _ctor(::MJFNABLBEIH* EMAOHHKGEBF, ::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::Layer*>* OFJMAJBGEPC, ::Il2CppArray<::System::Int32>* NFJLLLFLGPF)
	{
		return ((::System::Void(*)(::PVOID, ::MJFNABLBEIH*, ::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::Layer*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MKIFGEBEBAC__CTOR_OFFSET))(this, EMAOHHKGEBF, OFJMAJBGEPC, NFJLLLFLGPF);
	}

	::System::Void PKOGNPKCHHE(::Code::Logic::Data::ScriptObject::Level::PatternTimeline* ODPEJNDHNNA)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::PatternTimeline*))((::PBYTE)hIl2Cpp + MKIFGEBEBAC_PKOGNPKCHHE_OFFSET))(this, ODPEJNDHNNA);
	}
};
