#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ScenenLightManager { class Tup; }

#define NCLAAPMIJMD_COMPARE_OFFSET UNITYSDK_OFFSET(0xBB14C60)
#define NCLAAPMIJMD_CTOR_OFFSET UNITYSDK_OFFSET(0xBB14CF0)

	class NCLAAPMIJMD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLAAPMIJMD_CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::ScenenLightManager::Tup* a1, ::ScenenLightManager::Tup* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::ScenenLightManager::Tup*, ::ScenenLightManager::Tup*))((::PBYTE)hIl2Cpp + NCLAAPMIJMD_COMPARE_OFFSET))(this, a1, a2);
		}

	};
