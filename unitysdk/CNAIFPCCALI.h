#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConditionType.h"
#include "unitysdk/System/Object.h"
class JCMJBMIKIFO;

#define CNAIFPCCALI_CTOR_OFFSET UNITYSDK_OFFSET(0xDA47080)
#define CNAIFPCCALI_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0xDA46FC0)

	class CNAIFPCCALI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAIFPCCALI_CTOR_OFFSET))(this);
		}

		::JCMJBMIKIFO* LHLALAKKKKJ(::RPG::Client::MechCraft::MechCraftConditionType a1)
		{
			return ((::JCMJBMIKIFO*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftConditionType))((::PBYTE)hIl2Cpp + CNAIFPCCALI_LHLALAKKKKJ_OFFSET))(this, a1);
		}

	};
