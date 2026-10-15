#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GCIBMBJGPKI_EKLGEDEDFFE_CTOR_OFFSET UNITYSDK_OFFSET(0x15976B90)

inline static constexpr unsigned int GCIBMBJGPKI_EKLGEDEDFFE_TypeDefinitionIndex = 77936;

	class GCIBMBJGPKI_EKLGEDEDFFE : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 ALDIJLNMAKD; // 0x10
		::System::Single NAJMCEJEHDC; // 0x1C
		// static const ::System::Object LJFKHDDEOKH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIBMBJGPKI_EKLGEDEDFFE_CTOR_OFFSET))(this);
		}

	};
