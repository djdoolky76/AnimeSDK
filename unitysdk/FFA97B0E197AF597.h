#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/A418C49FA6A8C1F7/B90A85696E321517.h"

class BF22DF5A44B79D7A;
namespace A418C49FA6A8C1F7 { class BB6D09C3491971F6; }
namespace A418C49FA6A8C1F7 { class E031377F04FFF989; }
namespace A418C49FA6A8C1F7 { template <typename T> class E00E3289ECAF85A3; }
namespace System { class Enum; }
namespace System { class Type; }

#define FFA97B0E197AF597_FD959D5539CDCF1C_OFFSET UNITYSDK_OFFSET(0x4300530)
#define FFA97B0E197AF597__CCTOR_OFFSET UNITYSDK_OFFSET(0x4300990)

inline static constexpr unsigned int FFA97B0E197AF597_TypeDefinitionIndex = 13417;

class FFA97B0E197AF597 : public ::System::Object
{
public:
	static ::A418C49FA6A8C1F7::E00E3289ECAF85A3<::System::Enum*>** StaticGet_A288CB28FC2A6DA3()
	{
		return (::A418C49FA6A8C1F7::E00E3289ECAF85A3<::System::Enum*>**)Il2CppClass::FromTypeDefinitionIndex(FFA97B0E197AF597_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::A418C49FA6A8C1F7::BB6D09C3491971F6** StaticGet_E937D4885DAA1AE8()
	{
		return (::A418C49FA6A8C1F7::BB6D09C3491971F6**)Il2CppClass::FromTypeDefinitionIndex(FFA97B0E197AF597_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::A418C49FA6A8C1F7::E031377F04FFF989** StaticGet_E8DA44FCDB998CEB()
	{
		return (::A418C49FA6A8C1F7::E031377F04FFF989**)Il2CppClass::FromTypeDefinitionIndex(FFA97B0E197AF597_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Boolean FD959D5539CDCF1C(::BF22DF5A44B79D7A* AC79198E548AE14B, ::A418C49FA6A8C1F7::B90A85696E321517 E63B8D9BA8A06010, ::System::Type*& F97A7E1E42187BB1, ::System::Enum*& F90DA052C10849AB, ::System::Boolean& BDA806A0211FC26D)
	{
		return ((::System::Boolean(*)(::BF22DF5A44B79D7A*, ::A418C49FA6A8C1F7::B90A85696E321517, ::System::Type*&, ::System::Enum*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + FFA97B0E197AF597_FD959D5539CDCF1C_OFFSET))(AC79198E548AE14B, E63B8D9BA8A06010, F97A7E1E42187BB1, F90DA052C10849AB, BDA806A0211FC26D);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFA97B0E197AF597__CCTOR_OFFSET))();
	}
};
