#pragma once
#include "unitysdk/unitysdk.h"

class EFDFE320B42DA429;
class FC6018708B10DEB2;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections { class IEnumerator; }

#define BB711B989BB90B1B_FCD90E9760AB65E0_OFFSET UNITYSDK_OFFSET(0x20F7040)
#define BB711B989BB90B1B__CTOR_OFFSET UNITYSDK_OFFSET(0x20F7220)

inline static constexpr unsigned int BB711B989BB90B1B_TypeDefinitionIndex = 8700;

class BB711B989BB90B1B
{
public:
	::System::Collections::IEnumerator* FCD90E9760AB65E0(::EFDFE320B42DA429* AF4717A1A80FD60F, ::System::Action_3<::System::Boolean, ::FC6018708B10DEB2*, ::System::String*>* EF6ECCD05B4CC95B)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::EFDFE320B42DA429*, ::System::Action_3<::System::Boolean, ::FC6018708B10DEB2*, ::System::String*>*))((::PBYTE)hIl2Cpp + BB711B989BB90B1B_FCD90E9760AB65E0_OFFSET))(this, AF4717A1A80FD60F, EF6ECCD05B4CC95B);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB711B989BB90B1B__CTOR_OFFSET))(this);
	}
};
