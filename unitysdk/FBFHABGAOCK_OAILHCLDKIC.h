#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define FBFHABGAOCK_OAILHCLDKIC_IIJPALALJNJ_OFFSET UNITYSDK_OFFSET(0x1169FD60)
#define FBFHABGAOCK_OAILHCLDKIC_NKGAMDABGOH_OFFSET UNITYSDK_OFFSET(0x1169FC60)
#define FBFHABGAOCK_OAILHCLDKIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1169FC50)

inline static constexpr unsigned int FBFHABGAOCK_OAILHCLDKIC_TypeDefinitionIndex = 67660;

class FBFHABGAOCK_OAILHCLDKIC : public ::System::Object
{
public:
	::System::String* EENKGIMOCEO; // 0x10
	::System::Action* FFMGICPLKFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFHABGAOCK_OAILHCLDKIC__CTOR_OFFSET))(this);
	}

	::System::Void NKGAMDABGOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFHABGAOCK_OAILHCLDKIC_NKGAMDABGOH_OFFSET))(this);
	}

	::System::Void IIJPALALJNJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFHABGAOCK_OAILHCLDKIC_IIJPALALJNJ_OFFSET))(this);
	}
};
