#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMBKDDEKHGM;
namespace System { class Version; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGGFAJENBOF_BALGOAEMBDM_OFFSET UNITYSDK_OFFSET(0xB6955F0)
#define LGGFAJENBOF_CABKEIBGPLJ_OFFSET UNITYSDK_OFFSET(0xB695950)
#define LGGFAJENBOF_CTOR_OFFSET UNITYSDK_OFFSET(0xB695A30)

inline static constexpr unsigned int LGGFAJENBOF_TypeDefinitionIndex = 82244;

	class LGGFAJENBOF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MMBKDDEKHGM*>* JCGGNJHEJKD; // 0x10
		::System::Version* CNCPHIIDFNF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGFAJENBOF_CTOR_OFFSET))(this);
		}

		::MMBKDDEKHGM* BALGOAEMBDM(::System::Version* a1, ::System::Version* a2)
		{
			return ((::MMBKDDEKHGM*(*)(::PVOID, ::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + LGGFAJENBOF_BALGOAEMBDM_OFFSET))(this, a1, a2);
		}

		::System::Boolean CABKEIBGPLJ(::System::Version* a1, ::System::Version* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + LGGFAJENBOF_CABKEIBGPLJ_OFFSET))(this, a1, a2);
		}

	};
