#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define EA73DE56E5B44C6A_AB783D1F6F7763D0_OFFSET UNITYSDK_OFFSET(0x1F431E0)
#define EA73DE56E5B44C6A_EC22F59F2C588175_OFFSET UNITYSDK_OFFSET(0x1F43230)
#define EA73DE56E5B44C6A_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x1F43090)
#define EA73DE56E5B44C6A__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int EA73DE56E5B44C6A_TypeDefinitionIndex = 7698;

class EA73DE56E5B44C6A : public ::EFC4AEA2121EC272
{
public:
	::UnityEngine::Transform* E885A2E0734BCF35; // 0x80
	::UnityEngine::UI::Text* AE499F2E13B405ED; // 0x88
	::UnityEngine::UI::Text* A9C2B836E0E59461; // 0x90

	::System::Void AB783D1F6F7763D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA73DE56E5B44C6A_AB783D1F6F7763D0_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA73DE56E5B44C6A__CTOR_OFFSET))(this);
	}

	::System::Void EC22F59F2C588175(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EA73DE56E5B44C6A_EC22F59F2C588175_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA73DE56E5B44C6A_FFE59D93BEA6E2CA_OFFSET))(this);
	}
};
