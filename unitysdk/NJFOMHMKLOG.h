#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJAOGKDNFD.h"
class CLFIGBPHLHI;
class NJFOMHMKLOG;
namespace UnityEngine { class Component; }

#define NJFOMHMKLOG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC0FA80)
#define NJFOMHMKLOG_CLONE_OFFSET UNITYSDK_OFFSET(0xBC0FBE0)
#define NJFOMHMKLOG_CTOR_OFFSET UNITYSDK_OFFSET(0xBC0FB00)
#define NJFOMHMKLOG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBC0FCA0)
#define NJFOMHMKLOG_REVERSE_OFFSET UNITYSDK_OFFSET(0xBC0FB20)

	class NJFOMHMKLOG : public ::LLJAOGKDNFD
	{
	public:
		::UnityEngine::Component* IJOMDJLLAEI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFOMHMKLOG_CTOR_OFFSET))(this);
		}

		static ::NJFOMHMKLOG* BPLPBPMEODA()
		{
			return ((::NJFOMHMKLOG*(*)())((::PBYTE)hIl2Cpp + NJFOMHMKLOG_BPLPBPMEODA_OFFSET))();
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFOMHMKLOG_REVERSE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFOMHMKLOG_CLONE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJFOMHMKLOG_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
