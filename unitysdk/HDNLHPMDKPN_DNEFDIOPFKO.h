#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HDNLHPMDKPN_DNEFDIOPFKO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16CE9F50)
#define HDNLHPMDKPN_DNEFDIOPFKO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16CEA020)
#define HDNLHPMDKPN_DNEFDIOPFKO_INVOKE_OFFSET UNITYSDK_OFFSET(0x16CE9BE0)
#define HDNLHPMDKPN_DNEFDIOPFKO__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE9BD0)

inline static constexpr unsigned int HDNLHPMDKPN_DNEFDIOPFKO_TypeDefinitionIndex = 53827;

class HDNLHPMDKPN_DNEFDIOPFKO : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* FABAAKLFDHN, ::System::IntPtr LJEPPLANHIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HDNLHPMDKPN_DNEFDIOPFKO__CTOR_OFFSET))(this, FABAAKLFDHN, LJEPPLANHIL);
	}

	::System::Void Invoke(::System::UInt32 BKLGNCBNEGM, ::System::Int32 IHDCGPLNEBJ, ::MoleMole::Config::MonsterStrengthType OBNIAHNMHPF, ::System::Boolean GPCHIMBGNJO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::MoleMole::Config::MonsterStrengthType, ::System::Boolean))((::PBYTE)hIl2Cpp + HDNLHPMDKPN_DNEFDIOPFKO_INVOKE_OFFSET))(this, BKLGNCBNEGM, IHDCGPLNEBJ, OBNIAHNMHPF, GPCHIMBGNJO);
	}

	::System::IAsyncResult* BeginInvoke(::System::UInt32 BKLGNCBNEGM, ::System::Int32 IHDCGPLNEBJ, ::MoleMole::Config::MonsterStrengthType OBNIAHNMHPF, ::System::Boolean GPCHIMBGNJO, ::System::AsyncCallback* EJGDHCIBCJH, ::System::Object* FABAAKLFDHN)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::MoleMole::Config::MonsterStrengthType, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HDNLHPMDKPN_DNEFDIOPFKO_BEGININVOKE_OFFSET))(this, BKLGNCBNEGM, IHDCGPLNEBJ, OBNIAHNMHPF, GPCHIMBGNJO, EJGDHCIBCJH, FABAAKLFDHN);
	}

	::System::Void EndInvoke(::System::IAsyncResult* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HDNLHPMDKPN_DNEFDIOPFKO_ENDINVOKE_OFFSET))(this, IGAAKDOIPNN);
	}
};
