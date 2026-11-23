#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class RawImage; }

#define F79DAFD009D2DC23_A31B0757EE32095C_OFFSET UNITYSDK_OFFSET(0x390D2E0)
#define F79DAFD009D2DC23_AA52B188B57791D8_OFFSET UNITYSDK_OFFSET(0x390DC70)
#define F79DAFD009D2DC23_AC327F8C3F3A9395_OFFSET UNITYSDK_OFFSET(0x390DBF0)
#define F79DAFD009D2DC23_AE6D7D76874BE44F_OFFSET UNITYSDK_OFFSET(0x390D940)
#define F79DAFD009D2DC23_B51736BE09ED2423_OFFSET UNITYSDK_OFFSET(0x390D8C0)
#define F79DAFD009D2DC23_B592A22D4555A8CA_OFFSET UNITYSDK_OFFSET(0x390D860)
#define F79DAFD009D2DC23__CCTOR_OFFSET UNITYSDK_OFFSET(0x390DED0)
#define F79DAFD009D2DC23__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F79DAFD009D2DC23_TypeDefinitionIndex = 12306;

class F79DAFD009D2DC23 : public ::System::Object
{
public:
	static ::F79DAFD009D2DC23** StaticGet_EE999965A1D2099B()
	{
		return (::F79DAFD009D2DC23**)Il2CppClass::FromTypeDefinitionIndex(F79DAFD009D2DC23_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::UnityEngine::GameObject* FEC2AF6E2228A749; // 0x10
	::UnityEngine::Canvas* E8C4D6A7589BBAA2; // 0x18
	::UnityEngine::UI::RawImage* F49848274A97D1B6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F79DAFD009D2DC23__CTOR_OFFSET))(this);
	}

	::System::Void AC327F8C3F3A9395()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F79DAFD009D2DC23_AC327F8C3F3A9395_OFFSET))(this);
	}

	::System::Void B51736BE09ED2423()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F79DAFD009D2DC23_B51736BE09ED2423_OFFSET))(this);
	}

	::UnityEngine::Texture2D* B592A22D4555A8CA()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + F79DAFD009D2DC23_B592A22D4555A8CA_OFFSET))(this);
	}

	::System::Void AA52B188B57791D8(::UnityEngine::Texture2D* E2F69B1AC05DF698, ::System::Single B293560EBB811EA6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Single))((::PBYTE)hIl2Cpp + F79DAFD009D2DC23_AA52B188B57791D8_OFFSET))(this, E2F69B1AC05DF698, B293560EBB811EA6);
	}

	::System::Void AE6D7D76874BE44F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F79DAFD009D2DC23_AE6D7D76874BE44F_OFFSET))(this);
	}

	::System::Void A31B0757EE32095C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F79DAFD009D2DC23_A31B0757EE32095C_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F79DAFD009D2DC23__CCTOR_OFFSET))();
	}
};
