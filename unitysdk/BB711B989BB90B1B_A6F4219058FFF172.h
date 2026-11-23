#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFDFE320B42DA429;
class FC6018708B10DEB2;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define BB711B989BB90B1B_A6F4219058FFF172_BEB539520E73E837_OFFSET UNITYSDK_OFFSET(0x2108380)
#define BB711B989BB90B1B_A6F4219058FFF172_EBD5874B3E922DF8_OFFSET UNITYSDK_OFFSET(0x2108510)
#define BB711B989BB90B1B_A6F4219058FFF172__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BB711B989BB90B1B_A6F4219058FFF172_TypeDefinitionIndex = 8699;

class BB711B989BB90B1B_A6F4219058FFF172 : public ::System::Object
{
public:
	::EFDFE320B42DA429* AF4717A1A80FD60F; // 0x10
	::System::Action_3<::System::Boolean, ::FC6018708B10DEB2*, ::System::String*>* EF6ECCD05B4CC95B; // 0x18
	::System::String* E3E0E7721FFE73E1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB711B989BB90B1B_A6F4219058FFF172__CTOR_OFFSET))(this);
	}

	::System::Void BEB539520E73E837(::Il2CppArray<::System::Byte>* E83E519C5C42896F)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BB711B989BB90B1B_A6F4219058FFF172_BEB539520E73E837_OFFSET))(this, E83E519C5C42896F);
	}

	::System::Void EBD5874B3E922DF8(::System::String* EF92D7BA49D05EC0, ::System::Int64 E84073D3D0C5F54B)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + BB711B989BB90B1B_A6F4219058FFF172_EBD5874B3E922DF8_OFFSET))(this, EF92D7BA49D05EC0, E84073D3D0C5F54B);
	}
};
