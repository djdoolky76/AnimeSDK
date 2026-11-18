#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOONMNPCCNF.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UvModes.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define BPLOHOFBFEA__CTOR_OFFSET UNITYSDK_OFFSET(0x14F0A9E0)

inline static constexpr unsigned int BPLOHOFBFEA_TypeDefinitionIndex = 79381;

class BPLOHOFBFEA : public ::IOONMNPCCNF
{
public:
	::UnityEngine::Rendering::Universal::BlendModes FEGCKCGMPFI; // 0x18
	::System::Boolean DECIDLELLCP; // 0x1C
	::System::Boolean IKPEHNOMOOE; // 0x1D
	::System::Boolean HIPPCODBMNN; // 0x1E
	::System::Boolean GCAHJKHELIB; // 0x1F
	::UnityEngine::Rendering::Universal::ChannelMapping HFPBKDIDAMH; // 0x20
	::UnityEngine::Color FOENJNNKEBO; // 0x24
	::UnityEngine::Color AKKAGPOFFDE; // 0x34
	::System::Single GLCKPLDKMPC; // 0x44
	::System::Single FCPCMLIMCDG; // 0x48
	::UnityEngine::Rendering::Universal::ChannelMapping MOFGPFFGEDN; // 0x4C
	::UnityEngine::Rendering::Universal::ChannelMapping EPMMCKCPIEE; // 0x50
	::UnityEngine::Vector2 BEKHMHDJOEA; // 0x54
	::System::Single BCLEICBGIBK; // 0x5C
	::System::Single JDHMPDEIPEO; // 0x60
	::System::Single JKAGHMKPKON; // 0x64
	::UnityEngine::Rendering::Universal::UvModes LBPOEJECHAM; // 0x68
	::UnityEngine::Vector2 MJCOHPKIJBP; // 0x6C
	::System::Single OAKFMOELMOK; // 0x74
	::System::Boolean LDOAABMMOOF; // 0x78
	::System::Boolean EGMIEBFHJJH; // 0x79
	::System::Boolean GHLFELFPFML; // 0x7A
	::System::Boolean AGBPBFCIOHO; // 0x7B
	::UnityEngine::Vector4 LCJFHKAADGB; // 0x7C
	::UnityEngine::Vector4 KPPDDJKILOO; // 0x8C
	::System::Single NNMFPOPPGGG; // 0x9C
	::UnityEngine::Rendering::Universal::UvModes POLEMLOBIAI; // 0xA0
	::System::Single DEJGKHHDDGE; // 0xA4
	::System::Single FHFJPNDFBHP; // 0xA8
	::System::Single KHEAGMJCJKD; // 0xAC
	::UnityEngine::Rendering::Universal::UvModes KMBGAIKLCJN; // 0xB0
	::UnityEngine::Rendering::Universal::ChannelMapping HALOLIIIJFM; // 0xB4
	::UnityEngine::Vector2 EDLKLJPILPM; // 0xB8
	::UnityEngine::Rendering::Universal::ChannelMapping CKCGDCLHPHL; // 0xC0
	::UnityEngine::Vector2 OOADCAKHIAC; // 0xC4
	::UnityEngine::Vector2 MLACHLPOFNA; // 0xCC
	::UnityEngine::Rendering::Universal::UvModes HDAGBNFBDJF; // 0xD4
	::System::Single DGGDBCADFBN; // 0xD8
	::UnityEngine::Rendering::Universal::UvModes CDIJPIMCCJG; // 0xDC
	::UnityEngine::Rendering::Universal::UvModes JBBBPKFGDHH; // 0xE0
	::UnityEngine::Vector4 CIIFEBPIHBF; // 0xE4
	::UnityEngine::Vector4 ADOKGGACACP; // 0xF4
	::UnityEngine::Vector4 CMOHOKCDECL; // 0x104
	::System::Single BDIMPJKDHOF; // 0x114

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLOHOFBFEA__CTOR_OFFSET))(this);
	}
};
