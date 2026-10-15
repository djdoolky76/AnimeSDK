#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
class NJKFOJJDGGG;

#define LPKEFLPGEBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB822550)
#define LPKEFLPGEBD_MJEHCLPOMGL_OFFSET UNITYSDK_OFFSET(0xB822600)
#define LPKEFLPGEBD_NGLKABLICOE_OFFSET UNITYSDK_OFFSET(0xB8226A0)
#define LPKEFLPGEBD_PDNMFMKOGNB_OFFSET UNITYSDK_OFFSET(0xB822560)

	class LPKEFLPGEBD : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + LPKEFLPGEBD_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightNodeType PDNMFMKOGNB()
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKEFLPGEBD_PDNMFMKOGNB_OFFSET))(this);
		}

		::RPG::GameCore::GridFightNodeType MJEHCLPOMGL()
		{
			return ((::RPG::GameCore::GridFightNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKEFLPGEBD_MJEHCLPOMGL_OFFSET))(this);
		}

		::System::Boolean NGLKABLICOE(::RPG::GameCore::GridFightNodeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightNodeType))((::PBYTE)hIl2Cpp + LPKEFLPGEBD_NGLKABLICOE_OFFSET))(this, a1);
		}

	};
