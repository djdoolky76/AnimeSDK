#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriTimeline/Atom/CriAtomClipBase.h"

class FD58DF262776449E;
namespace CriWare { class CriAtomCueSheet; }
namespace CriWare { class CriAtomSourceBase; }
namespace System { class String; }

#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_A510E7DF8AB449F4_OFFSET UNITYSDK_OFFSET(0x2AB6720)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_A67329A62D9867E0_OFFSET UNITYSDK_OFFSET(0x2AB68A0)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_B0C2AAA4B32CAE3F_OFFSET UNITYSDK_OFFSET(0x2AB6940)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_F8AB86B56BA15424_OFFSET UNITYSDK_OFFSET(0x2AB6740)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_F9F61134651599E6_OFFSET UNITYSDK_OFFSET(0x165A410)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_FD6F3A0979002968_OFFSET UNITYSDK_OFFSET(0x2AB6730)
#define CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB6640)

namespace CriWare::CriTimeline::Atom
{
	inline static constexpr unsigned int CriAtomClip_TypeDefinitionIndex = 19217;

	class CriAtomClip : public ::CriWare::CriTimeline::Atom::CriAtomClipBase
	{
	public:
		::System::String* cueSheet; // 0x30
		::System::String* cueName; // 0x38

		::System::Void F8AB86B56BA15424(::CriWare::CriAtomSourceBase* FF5A6C553F2716FE)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomSourceBase*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_F8AB86B56BA15424_OFFSET))(this, FF5A6C553F2716FE);
		}

		::System::String* F9F61134651599E6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_F9F61134651599E6_OFFSET))(this);
		}

		::System::String* B0C2AAA4B32CAE3F()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_B0C2AAA4B32CAE3F_OFFSET))(this);
		}

		::CriWare::CriAtomCueSheet* FD6F3A0979002968()
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_FD6F3A0979002968_OFFSET))(this);
		}

		::FD58DF262776449E* A510E7DF8AB449F4()
		{
			return ((::FD58DF262776449E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_A510E7DF8AB449F4_OFFSET))(this);
		}

		::System::String* A67329A62D9867E0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP_A67329A62D9867E0_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_ATOM_CRIATOMCLIP__CTOR_OFFSET))(this);
		}
	};
}
