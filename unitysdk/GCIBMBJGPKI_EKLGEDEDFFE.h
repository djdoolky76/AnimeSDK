#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GCIBMBJGPKI_EKLGEDEDFFE_CTOR_OFFSET UNITYSDK_OFFSET(0x19EB1610)

inline static constexpr unsigned int GCIBMBJGPKI_EKLGEDEDFFE_TypeDefinitionIndex = 80670;

	class GCIBMBJGPKI_EKLGEDEDFFE : public ::System::Object
	{
	public:
		::System::Single NAJMCEJEHDC; // 0x10
		::UnityEngine::Vector3 ALDIJLNMAKD; // 0x14
		// static const ::System::Object LJFKHDDEOKH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIBMBJGPKI_EKLGEDEDFFE_CTOR_OFFSET))(this);
		}

	};
