#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace SimpleJSON { class JSONNode; }

#define FPBPHFDOEOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1590D690)
#define FPBPHFDOEOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1590D680)
#define FPBPHFDOEOM_FKBBJOOEBEF_OFFSET UNITYSDK_OFFSET(0x1590D6A0)

	class FPBPHFDOEOM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBPHFDOEOM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::SimpleJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + FPBPHFDOEOM_CTOR_1_OFFSET))(this, a1);
		}

		::SimpleJSON::JSONNode* FKBBJOOEBEF()
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBPHFDOEOM_FKBBJOOEBEF_OFFSET))(this);
		}

	};
