#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class B5A399C75D6DA17C;
class F863A3AD1C1EA6E0;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
template <typename T> class FA9B773E8C9B97E9;

#define E0BBC1782AD261ED_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1CE4730)
#define E0BBC1782AD261ED_A6F1CC3F292BBADE_OFFSET UNITYSDK_OFFSET(0x1CE4CA0)
#define E0BBC1782AD261ED_B1A9AFE175C14F37_OFFSET UNITYSDK_OFFSET(0x1CE4A40)
#define E0BBC1782AD261ED_B497851CF58D6D62_OFFSET UNITYSDK_OFFSET(0x1CE4B20)
#define E0BBC1782AD261ED_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1CE4ED0)
#define E0BBC1782AD261ED__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE51B0)

inline static constexpr unsigned int E0BBC1782AD261ED_TypeDefinitionIndex = 9842;

class E0BBC1782AD261ED : public ::EFC4AEA2121EC272
{
public:
	::UnityEngine::GameObject* E3B553B3D120F3A4; // 0x80
	::ABC::UI::MonoLocalizedTmp* BF70FF9BDD52A3E5; // 0x88
	::ABC::UI::MonoButton* F79A5C43FCA49B5D; // 0x90
	::UnityEngine::UI::Image* E207ED83354041E8; // 0x98
	::ABC::UI::MonoLocalizedTmp* FE8AE23517CC4EDA; // 0xA0
	::ABC::UI::MonoLocalizedTmp* F6BBE40313CF5312; // 0xA8
	::ABC::UI::MonoButton* B920752060A6FEC5; // 0xB0
	::UnityEngine::UI::Image* FB6C370BE92DD4EB; // 0xB8
	::ABC::UI::MonoPrefabLoader* FAAFB4ABF31C8326; // 0xC0
	::System::Int32 A02AF894637B3DAE; // 0xC8
	::System::Byte _padding0[0x4];
	::System::Action_1<::System::Int32>* E182D7E7F8867A02; // 0xD0
	::System::Collections::Generic::List_1<::B5A399C75D6DA17C*>* EFF6A5C68E4048C3; // 0xD8

	::System::Void A6F1CC3F292BBADE(::FA9B773E8C9B97E9<::System::UInt32>* AD83E8915DEFCD86)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::System::UInt32>*))((::PBYTE)hIl2Cpp + E0BBC1782AD261ED_A6F1CC3F292BBADE_OFFSET))(this, AD83E8915DEFCD86);
	}

	::System::Void B497851CF58D6D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0BBC1782AD261ED_B497851CF58D6D62_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0BBC1782AD261ED__CTOR_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::F863A3AD1C1EA6E0* F82F791F0A5D5351, ::System::Int32 B48C66E5FB2449C6, ::System::Action_1<::System::Int32>* FE65C80CCBFB3D23)
	{
		return ((::System::Void(*)(::PVOID, ::F863A3AD1C1EA6E0*, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + E0BBC1782AD261ED_EC3033C0485522FB_OFFSET))(this, F82F791F0A5D5351, B48C66E5FB2449C6, FE65C80CCBFB3D23);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* E32DFA894DBD320D)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + E0BBC1782AD261ED_A54D936318FAF9E3_OFFSET))(this, E32DFA894DBD320D);
	}

	::System::Void B1A9AFE175C14F37()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0BBC1782AD261ED_B1A9AFE175C14F37_OFFSET))(this);
	}
};
